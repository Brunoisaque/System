# Solaris Lillypad — Firmware

Código-fonte do firmware para ESP32-S3.

## Estrutura

- `src/` — código Arduino (.ino) e bibliotecas
- `bin/` — binários e zips de release

## Build

1. Instale o Arduino IDE ou PlatformIO.
2. Abra o sketch em `src/`.
3. Configure as credenciais via GitHub Secrets / variáveis de ambiente.
4. Faça upload via USB ou OTA.

## Segurança

Nunca commitar senhas, chaves privadas ou certificados.
