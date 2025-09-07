
weight=float(input("Enter your weight in kg: "))
height=float(input("Enter your height in meter: "))
BMI=weight/(height*height)

if BMI>0 and BMI<18.5:
    print(f"your weight is low: {BMI:.2f}")
elif BMI>=18.5 and BMI<24.9:
    print(f"your weight is normal: {BMI:.2f}")
elif BMI>=25 and BMI<29.9:
    print(f"your weight is Over: {BMI:.2f}")
else:
    print(f"your weight Obese: {BMI:.2f}")