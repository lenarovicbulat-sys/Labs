# Вводим количество секунд
seconds = int(input("Введите количество секунд: "))

# Находим количество полных часов
hours = seconds // 3600

# Находим оставшиеся минуты
minutes = (seconds % 3600) // 60

# Находим оставшиеся секунды
remaining_seconds = seconds % 60

# Выводим результат
print("Часы:", hours)
print("Минуты:", minutes)
print("Секунды:", remaining_seconds)