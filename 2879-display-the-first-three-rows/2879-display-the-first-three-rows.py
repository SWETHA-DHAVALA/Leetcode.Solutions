import pandas as pd

def selectFirstRows(employees: pd.DataFrame) -> pd.DataFrame:
    data = employees
    return data.head(3)
