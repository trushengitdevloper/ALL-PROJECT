from tabulate import tabulate  # for create table in output


def main():
    print('wlecome to PVR AHEMDABAD')
    nam=input('enter your name ')
    age=int(input('enter your age '))
    print('your name is',nam,"\n"'your age is',age)
    if (age>=18):
        m=[
            ['Movies name','Show timeing','Tickets price for one'],
            ['Spider-Man: No Way Home','4:45pm','120'],
            ["don't look up",'7:45pm','120'],
            ['kabir sing','10:45pm','120'],
            ['inception','12:45pm','120']
        ]
        print(tabulate(m))
        print("\nWhich movie you like to watch sir")
        print("\n1=Spider-Man: No Way Home\n2=don't look up\n3=kabir sing\n4=inception\t")
        print(choice())
    else:
        print("you are not able to by tikits")
def choice():
    a=int(input("enter your choice  "))
    if a==1:
        s=[['Movies name','Show timeing','Tickets price for one'],['Spider-Man: No Way Home','4:45pm','120']]
        print(tabulate(s))
        p=[['list of Tickets price'],
           ["silver Tickets price 120","gold Tickets price 220","diamond Tickets price\t280"]]
        print(tabulate(p))
        selecte=int(input('select your section \nPrees 1 for silver\nPrees 2 for Gold\nPrees 3 for Diamond  '))
        if selecte==1:
            price=120
            f=input("\nhow many tikites you want")
            print('you selected',f,'seats in silver')
            print("         "'\nBILL')
            tr=[["Movies name","Show timeing","Tikites price"],
                ["Spider-Man: No Way Home","4:20pm",price]]
            print(tabulate(tr))
            for i in f:
                print(tabulate(tr))
        elif selecte==2:
            price=220
            f=input("\nhow many tikites you want")
            print('you selected',f,'seats in silver')
            print("         "'\nBILL')
            tr=[["Movies name","Show timeing","Tikites price"],
                ["Spider-Man: No Way Home","4:20pm",price]]
            print(tabulate(tr))
            for i in f:
                print(tabulate(tr))
    
        else:
            price=280
            f=input("\nhow many tikites you want")
            print('you selected',f,'seats in silver')
            print("         "'\nBILL')
            tr=[["Movies name","Show timeing","Tikites price"],
                ["Spider-Man: No Way Home","4:20pm",price]]
            print(tabulate(tr))   
            for i in f:
                print(tabulate(tr))
    elif a==2:
        s=[['Movies name','Show timeing','Tickets price for one'],["don't look up",'7:45pm','120']]
        print(tabulate(s))
        p=[['list of Tickets price'],
           ["silver Tickets price 120","gold Tickets price 220","diamond Tickets price\t280"]]
        print(tabulate(p))
        selecte=int(input('select your section \nPrees 1 for silver\nPrees 2 for Gold\nPrees 3 for Diamond  '))
        if selecte==1:
            price=120
            f=input("\nhow many tickets you want")
            print('you selected',f,'seats in silver')
            print("         "'\nBILL')
            tr=[["Movies name","Show timeing","Tikites price"],
                ["don't look up","7:45pm",price]]
            print(tabulate(tr))
            for i in f:
                print(tabulate(tr))
        elif selecte==2:
            price=220
            f=input("\nhow many tikites you want")
            print('you selected',f,'seats in silver')
            print("         "'\nBILL')
            tr=[["Movies name","Show timeing","Tikites price"],
                ["don't look up","7:45pm",price]]
            print(tabulate(tr))
            for i in f:
                print(tabulate(tr))
        else:
            price=280
            f=input("\nhow many tikites you want")
            print('you selected',f,'seats in silver')
            print("         "'\nBILL')
            tr=[["Movies name","Show timeing","Tikites price"],
                ["don't look up","7:45pm",price]]
            print(tabulate(tr))   
            for i in f:
                print(tabulate(tr))
    elif a==3:
        s=[['Movies name','Show timeing','Tickets price for one'],["kabir sing",'10:45pm','120']]
        print(tabulate(s))
        p=[['list of Tickets price'],
           ["silver Tickets price 120","gold Tickets price 220","diamond Tickets price\t280"]]
        print(tabulate(p))
        selecte=int(input('select your section \nPrees 1 for silver\nPrees 2 for Gold\nPrees 3 for Diamond  '))
        if selecte==1:
            price=120
            f=input("\nhow many tikites you want")
            print('you selected',f,'seats in silver')
            print("         "'\nBILL')
            tr=[["Movies name","Show timeing","Tikites price"],
                ["kabir sing","10:45pm",price]]
            
            print(tabulate(tr))
           
            for i in f:
                print(tabulate(tr))
            
        elif selecte==2:
            price=220
            f=input("\nhow many tikites you want")
            print('you selected',f,'seats in silver')
            print("         "'\nBILL')
            tr=[["Movies name","Show timeing","Tikites price"],
                ["kabir sing","10:45pm",price]]
            print(tabulate(tr))
            for i in f:
                print(tabulate(tr))
        else:
            price=280
            f=input("\nhow many tikites you want")
            print('you selected',f,'seats in silver')
            print("         "'\nBILL')
            tr=[["Movies name","Show timeing","Tikites price"],
                ["kabir sing","10:45pm",price]]
            print(tabulate(tr))   
            for i in f:
                print(tabulate(tr))
    else:
        s=[['Movies name','Show timeing','Tickets price for one'],['inception','12:45pm','120']]
        print(tabulate(s))
        p=[['list of Tickets price'],
           ["silver Tickets price 120","gold Tickets price 220","diamond Tickets price\t280"]]
        print(tabulate(p))
        selecte=int(input('select your section \nPrees 1 for silver\nPrees 2 for Gold\nPrees 3 for Diamond  '))
        if selecte==1:
            price=120
            f=input("\nhow many tikites you want")
            print('you selected',f,'seats in silver')
            print("         "'\nBILL')
            tr=[["Movies name","Show timeing","Tikites price"],
                ["inception","12:45pm",price]]
            print(tabulate(tr))
            for i in f:
                print(tabulate(tr))
        elif selecte==2:
            price=220
            f=input("\nhow many tikites you want")
            print('you selected',f,'seats in silver')
            print("         "'\nBILL')
            tr=[["Movies name","Show timeing","Tikites price"],
                ["inception","12:45pm",price]]
            print(tabulate(tr))
            for i in f:
                print(tabulate(tr))
        else:
            price=280
            f=input("\nhow many tikites you want")
            print('you selected',f,'seats in silver')
            print("         "'\nBILL')
            tr=[["Movies name","Show timeing","Tikites price"],
                ["inception","12:45pm",price]]
            print(tabulate(tr))   
            for i in f:
                print(tabulate(tr))
        
print(main())



    