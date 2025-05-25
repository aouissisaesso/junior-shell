#!/bin/bash
echo "=== Infos système ==="
echo "Nom de l'utilisateur : $USER"
echo "Nom de la machine : $(hostname)"
echo "Date et heure : $(date)"
echo "Uptime : $(uptime -p)"
echo "Espace disque :"
df -h /
echo "Mémoire disponible :"
free -h 
