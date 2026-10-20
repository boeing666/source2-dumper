#pragma once

class CCitadel_Ability_ChessMaster_PrimaryWeaponVData : public CCitadel_Ability_PrimaryWeaponVData /*0x0*/  // sizeof 0x1468, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1360]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strBishopTracer; // offset 0x1360, size 0xE0, align 8 | MPropertyStartGroup
    float32 m_flMoveSlashThreshold; // offset 0x1440, size 0x4, align 4
    char _pad_1444[0x4]; // offset 0x1444
    CSoundEventName m_strBishopCommandSound; // offset 0x1448, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flHorizontalOffsetPerShot; // offset 0x1458, size 0x4, align 4 | MPropertyStartGroup
    int32 m_nTicksToHoldShuffleTime; // offset 0x145C, size 0x4, align 4 | MPropertyStartGroup
    CGlobalSymbol m_strAG2HeroActionGainedBullets; // offset 0x1460, size 0x8, align 8
};
