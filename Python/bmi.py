weight = 60
height = 1.8
i = weight/(height**2)
bmi = float(i)
if bmi > 32:
    print("yanzhongfeipang");
elif bmi > 28:
    print("feipang")
elif bmi > 25:
    print("guozhong")
elif bmi > 18.5:
    print("zhengchang")
else:
    print("guoqing");
    pass

