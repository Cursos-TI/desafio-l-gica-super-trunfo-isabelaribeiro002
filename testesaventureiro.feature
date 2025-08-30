Feature: Comparação de atributos entre cartas
  Para determinar a carta vencedora
  Como jogador do Super Trunfo
  Quero escolher um atributo e comparar duas cartas

  Scenario: Carta com maior população vence
    Given que tenho a Carta 1 com população de 500 habitantes
    And a Carta 2 com população de 800 habitantes
    When eu seleciono o atributo "População"
    Then a Carta 2 deve vencer

  Scenario: Carta com maior área vence
    Given que tenho a Carta 1 com área de 1000 km²
    And a Carta 2 com área de 800 km²
    When eu seleciono o atributo "Área"
    Then a Carta 1 deve vencer

  Scenario: Carta com maior PIB vence
    Given que tenho a Carta 1 com PIB de 300 bilhões
    And a Carta 2 com PIB de 200 bilhões
    When eu seleciono o atributo "PIB"
    Then a Carta 1 deve vencer

  Scenario: Carta com mais pontos turísticos vence
    Given que tenho a Carta 1 com 5 pontos turísticos
    And a Carta 2 com 10 pontos turísticos
    When eu seleciono o atributo "Pontos turísticos"
    Then a Carta 2 deve vencer

  Scenario: Carta com menor densidade demográfica vence
    Given que tenho a Carta 1 com densidade de 1.25 hab/km²
    And a Carta 2 com densidade de 0.02 hab/km²
    When eu seleciono o atributo "Densidade demográfica"
    Then a Carta 2 deve vencer

  Scenario: Empate em atributo
    Given que tenho a Carta 1 com população de 1000 habitantes
    And a Carta 2 com população de 1000 habitantes
    When eu seleciono o atributo "População"
    Then o resultado deve ser "Empate!"
