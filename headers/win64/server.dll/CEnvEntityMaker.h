#pragma once

class CEnvEntityMaker : public CPointEntity /*0x0*/  // sizeof 0x528, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    Vector m_vecEntityMins; // offset 0x4A8, size 0xC, align 4 | MNotSaved
    Vector m_vecEntityMaxs; // offset 0x4B4, size 0xC, align 4 | MNotSaved
    CHandle< CBaseEntity > m_hCurrentInstance; // offset 0x4C0, size 0x4, align 4
    CHandle< CBaseEntity > m_hCurrentBlocker; // offset 0x4C4, size 0x4, align 4
    VectorWS m_vecBlockerOrigin; // offset 0x4C8, size 0xC, align 4
    QAngle m_angPostSpawnDirection; // offset 0x4D4, size 0xC, align 4
    float32 m_flPostSpawnDirectionVariance; // offset 0x4E0, size 0x4, align 4
    float32 m_flPostSpawnSpeed; // offset 0x4E4, size 0x4, align 4
    bool m_bPostSpawnUseAngles; // offset 0x4E8, size 0x1, align 1
    char _pad_04E9[0x7]; // offset 0x4E9
    CUtlSymbolLarge m_iszTemplate; // offset 0x4F0, size 0x8, align 8
    CEntityIOOutput m_pOutputOnSpawned; // offset 0x4F8, size 0x18, align 255
    CEntityIOOutput m_pOutputOnFailedSpawn; // offset 0x510, size 0x18, align 255
};
