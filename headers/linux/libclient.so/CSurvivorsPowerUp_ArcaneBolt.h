#pragma once

class CSurvivorsPowerUp_ArcaneBolt : public CSurvivorsPowerUp_ProjectileAttack /*0x0*/  // sizeof 0x738, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x730]; // offset 0x0
    float32 m_flNextShotTimer; // offset 0x730, size 0x4, align 4
    int32 m_nShotsFired; // offset 0x734, size 0x4, align 4
};
