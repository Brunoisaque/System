# Solaris Lillypad

Plataforma experimental de IoT: ESP32-S3 coleta sensores e envia telemetria via MQTT/TLS para o gateway Solaris, que alimenta API, banco de dados e dashboard.

## Estrutura

- `firmware/esp32-s3/src/` — código-fonte Arduino
- `firmware/esp32-s3/bin/` — binários e zips de release
- `mqtt/` — configuração do broker e tópicos
- `docs/` — arquitetura
- `api/` — API central (a ser implementada)

## Versão atual

v0.2.0 — ver `CHANGELOG.md`

## Segurança

Nunca commitar segredos. Use GitHub Secrets para credenciais MQTT, chaves e certificados.

Ver `docs/ARCHITECTURE.md` para o fluxo completo.
