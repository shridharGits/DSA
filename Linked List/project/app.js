const numberOfNodes = document.getElementById('nodes')
const submit = document.getElementById('btn')

submit.addEventListener('click', (e)=>{
    e.preventDefault();
    console.log(parseInt(numberOfNodes.value));
    numberOfNodes.value = '';
})