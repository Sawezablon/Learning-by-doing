import csv
from datetime import datetime

def calculate_money_in(csv_file_path, transaction_ids):
    transactions = {}

    with open(csv_file_path, 'r') as csvfile:
        reader = csv.DictReader(csvfile)
        for row in reader:
            transaction_id = row['Transaction Details'].split()[1]  # Extract the transaction ID from the description
            if transaction_id in transaction_ids:
                transaction_date = datetime.strptime(row['Transaction Date'], "%d.%m.%Y")
                date_key = transaction_date.strftime("%Y-%m-%d")
                if transaction_id not in transactions:
                    transactions[transaction_id] = {}
                if date_key not in transactions[transaction_id]:
                    transactions[transaction_id][date_key] = []
                money_in = float(row['Money In'].replace(',', ''))  # Remove comma and convert to float
                transactions[transaction_id][date_key].append({'description': row['Transaction Details'], 'amount': money_in})

    return transactions

if __name__ == "__main__":
    csv_file_path = "transactionHistory.csv"  # Replace with the path to your CSV file
    transaction_ids = ["6339184", "6057214"]

    transactions = calculate_money_in(csv_file_path, transaction_ids)

    for transaction_id, daily_transactions in transactions.items():
        print(f"Transaction ID: {transaction_id}")
        for date, transaction_details in daily_transactions.items():
            total_money_in = sum(item['amount'] for item in transaction_details)
            print(f"Date: {date}, Total money in: {total_money_in}")
