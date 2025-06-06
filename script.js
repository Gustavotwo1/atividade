const IDADE_MINIMA_DESCONTO = 18;
const ASSINATURA_NECESSARIA = "Premium";

let idadeCliente = 25;
let tipoAssinaturaCliente = "Premium";

if (idadeCliente >= IDADE_MINIMA_DESCONTO && tipoAssinaturaCliente === ASSINATURA_NECESSARIA) {
  console.log("Parabéns! Você é elegível para o desconto especial.");
} else {
  console.log("Desculpe, você não atende aos critérios para o desconto especial.");
}
