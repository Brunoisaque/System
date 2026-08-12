# Solaris Lillypad — Architecture

## Plataforma

Solaris Lillypad é uma plataforma experimental composta por:

- API
- Bot
- Dashboard
- MQTT/TLS
- ESP32-S3
- sensores
- OTA
- integração com ambiente Oracle Solaris

## Fluxo

ESP32-S3
↓
Wi-Fi
↓
MQTT/TLS
↓
Solaris Gateway
↓
API
↓
Database
↓
WebSocket
↓
Dashboard

## OTA

Firmware:
- HTTPS
- assinatura digital
- validação
- partições OTA A/B
- health check
- rollback

## Segurança

Segredos nunca devem ser armazenados no GitHub.

Usar GitHub Secrets para:
- credenciais MQTT
- tokens
- chaves de API
- certificados privados
- credenciais de infraestrutura
