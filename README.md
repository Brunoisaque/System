# Solaris Lillypad

Plataforma experimental de IoT: ESP32-S3 coleta sensores e envia telemetria via MQTT/TLS para o gateway Solaris, que alimenta API, banco de dados e dashboard.

## Estrutura

- `firmware/esp32-s3/` — firmware Arduino/ESP-IDF
- `mqtt/` — configuração do broker e tópicos
- `docs/` — arquitetura
- `api/` — API central (a ser implementada)

## Segurança

Nunca commitar segredos. Use GitHub Secrets para credenciais MQTT, chaves e certificados.

Ver `docs/ARCHITECTURE.md` para o fluxo completo.
