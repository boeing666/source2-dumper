#pragma once

class CEnvEntityMaker : public CPointEntity /*0x0*/  // sizeof 0x7F8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    Vector m_vecEntityMins; // offset 0x778, size 0xC, align 4 | MNotSaved
    Vector m_vecEntityMaxs; // offset 0x784, size 0xC, align 4 | MNotSaved
    CHandle< CBaseEntity > m_hCurrentInstance; // offset 0x790, size 0x4, align 4
    CHandle< CBaseEntity > m_hCurrentBlocker; // offset 0x794, size 0x4, align 4
    VectorWS m_vecBlockerOrigin; // offset 0x798, size 0xC, align 4
    QAngle m_angPostSpawnDirection; // offset 0x7A4, size 0xC, align 4
    float32 m_flPostSpawnDirectionVariance; // offset 0x7B0, size 0x4, align 4
    float32 m_flPostSpawnSpeed; // offset 0x7B4, size 0x4, align 4
    bool m_bPostSpawnUseAngles; // offset 0x7B8, size 0x1, align 1
    char _pad_07B9[0x7]; // offset 0x7B9
    CUtlSymbolLarge m_iszTemplate; // offset 0x7C0, size 0x8, align 8
    CEntityIOOutput m_pOutputOnSpawned; // offset 0x7C8, size 0x18, align 255
    CEntityIOOutput m_pOutputOnFailedSpawn; // offset 0x7E0, size 0x18, align 255
};
