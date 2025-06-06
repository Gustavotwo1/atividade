let pontuacaoJogador = 2600;

const PONTO_MAX_INICIANTE = 1000;
const PONTO_MAX_INTERMEDIARIO = 2500;
const PONTO_MAX_AVANCADO = 5000;

if (pontuacaoJogador <= PONTO_MAX_INICIANTE) {
  console.log("Nível do Jogador: Iniciante");
} else if (pontuacaoJogador <= PONTO_MAX_INTERMEDIARIO) {
  console.log("Nível do Jogador: Intermediário");
} else if (pontuacaoJogador <= PONTO_MAX_AVANCADO) {
  console.log("Nível do Jogador: Avançado");
} else {
  console.log("Nível do Jogador: Mestre");
}
