{
    let harami = 45;
    console.log(harami);// LOCAL SCOPE, can only be accessed in this block...
}
//console.log(harami); WOULD GIVE AN ERROR...
let harami = 'NNF'//GLOBAL SCOPE, CAN BE ACCESSD THROUGH any BLOCK
{
    console.log(harami);
}
