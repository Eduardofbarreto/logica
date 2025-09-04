// Exemplo 1: document.write()
document.write("<strong>Usando document.write:</strong><br>");
for (let andar = 1; andar <= 10; andar++) {
  document.write(`O elevador está no ${andar}<br>`);
}

// Exemplo 2: innerHTML
let texto = "<strong>Usando innerHTML:</strong><br>";
for (let andar = 1; andar <= 10; andar++) {
  texto += `O elevador está no ${andar}<br>`;
}
document.getElementById("saida-innerHTML").innerHTML = texto;

// Exemplo 3: Criando elementos dinamicamente
const container = document.getElementById("saida-dinamica");
const titulo = document.createElement("p");
titulo.innerHTML = "<strong>Usando criação dinâmica:</strong>";
container.appendChild(titulo);

for (let andar = 1; andar <= 10; andar++) {
  const p = document.createElement("p");
  p.textContent = `O elevador está no ${andar}`;
  container.appendChild(p);
}
