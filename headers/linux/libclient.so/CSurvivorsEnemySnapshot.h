#pragma once

class CSurvivorsEnemySnapshot  // sizeof 0x14, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    SurvivorsEnemyID_t m_enemyID; // offset 0x0, size 0x4, align 255
    float32 m_flHealth; // offset 0x4, size 0x4, align 4
    VectorWS m_vOrigin; // offset 0x8, size 0xC, align 4
};
