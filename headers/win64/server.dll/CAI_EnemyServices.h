#pragma once

class CAI_EnemyServices : public CAI_Component /*0x0*/  // sizeof 0x50, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x48]; // offset 0x0
    CHandle< CBaseEntity > m_hEnemy; // offset 0x48, size 0x4, align 4
    GameTime_t m_flTimeEnemyChanged; // offset 0x4C, size 0x4, align 255
};
