# -FPROG2025-1
# Simulador de combate por turnos Automático

## Integrantes

- Athos Kolling
- Murilo Teribele Carvalho
- Francisco Marques

## Descrição

Este programa simula uma batalha por turnos entre dois times de aventureiros em um ambiente de RPG.

Cada time possui 5 personagens, um de cada classe:

- Guerreiro
- Mago
- Caçador
- Paladino
- Bárbaro

As batalhas seguem as regras do trabalho prático, incluindo escolha de atacante por razão vida/ataque, alvo aleatório entre vivos, cálculo de dano com chance de falha e ativação de habilidades especiais.

## Regras do Jogo (resumo)

- O time inicial é sorteado aleatoriamente.
- O atacante de cada rodada é o personagem com maior razão vida/ataque.
- O alvo é sorteado aleatoriamente entre os membros vivos do time inimigo.
- Dano = ataque − defesa (mínimo 0).
- Chance de erro de ataque (20%), exceto Bárbaro.
- Chance de falha de defesa (20%).
- Habilidades especiais são ativadas por chance conforme a classe.
- O Paladino pode regenerar parte da vida se sobreviver ao ataque.
- A luta termina quando todos os membros de um time morrem.
- O programa imprime o estado dos personagens após cada rodada e informa o time vencedor ou empate.

## Como Usar

Compile e execute o programa normalmente em um terminal:

```bash
gcc combate.c -o combate
./combate