var num = 153;
var sum = 0;

function demo()
{
    let temp=num; //create temp variable

    while(temp>0)
    {
        let rem = temp%10;
        sum = sum + (rem * rem * rem);
        temp = parseInt(temp/10);
    }

    if(sum==num)
    {
        console.log(num+" is an Armstrong Number")
    }
    else
    console.log(num+" is not  an Armstrong Number")
}

demo();