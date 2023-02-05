function employee()
{
    this.eno = 107;
    this.enm = "Wolverine";
    this.esal = 75000;
}

var obj = new employee(); 

console.log("Employee Details: ");
console.log("Eno:"+obj.eno);
console.log("Enm:"+obj.enm);
console.log("Esal:"+obj.esal);