# Solaris Lillypad — API

API central da plataforma.

## Responsabilidades

- receber telemetria;
- armazenar dados;
- comunicar com MQTT;
- fornecer WebSocket;
- alimentar o dashboard;
- receber eventos dos dispositivos.

## Segurança

A API de produção deverá utilizar:

- HTTPS;
- autenticação;
- validação de payload;
- rate limiting;
- logs;
- secrets externos.

Nenhuma senha ou chave privada deve ser armazenada no repositório.
