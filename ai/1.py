from datetime import datetime

def get_current_date(date_format="%Y-%m-%d %H:%M:%S"):
    if not date_format:
        raise ValueError("date value cannot be empty")
    return datetime.now().strftime(date_format)

print(get_current_date(""))