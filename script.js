const USUARIO_VALIDO = "adminUser";
const SENHA_VALIDA = "securePass123";

let usuarioDigitado = "adminUser";
let senhaDigitada = "securePass123";
let loginStatusMessage;

if (usuarioDigitado === USUARIO_VALIDO) {
  if (senhaDigitada === SENHA_VALIDA) {
    loginStatusMessage = "Login bem-sucedido! Bem-vindo!";

    // Teste de escopo
    var testeEscopo = "Eu fui declarado com var";
    let testeLet = "Eu fui declarado com let";
  } else {
    loginStatusMessage = "Senha incorreta. Tente novamente.";
  }
} else {
  loginStatusMessage = "Usuário não encontrado.";
}

console.log(loginStatusMessage);
console.log(testeEscopo); // Funciona com var
// console.log(testeLet); // ERRO: let tem escopo de bloco
