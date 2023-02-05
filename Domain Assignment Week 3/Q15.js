var fibo = function (num)
{
    if(num === 1)
    {
        return [0,1];
    }
    else
    {
        var arr = fibo (num-1);

        arr.push(arr[arr.length-1]+arr[arr.length-2]);

        return arr;
    }
};

console.log(fibo(10));