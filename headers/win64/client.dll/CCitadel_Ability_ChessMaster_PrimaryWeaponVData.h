#pragma once

class CCitadel_Ability_ChessMaster_PrimaryWeaponVData : public CCitadel_Ability_PrimaryWeaponVData /*0x0*/  // sizeof 0x1460, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1358]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strBishopTracer; // offset 0x1358, size 0xE0, align 8 | MPropertyStartGroup
    float32 m_flMoveSlashThreshold; // offset 0x1438, size 0x4, align 4
    char _pad_143C[0x4]; // offset 0x143C
    CSoundEventName m_strBishopCommandSound; // offset 0x1440, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flHorizontalOffsetPerShot; // offset 0x1450, size 0x4, align 4 | MPropertyStartGroup
    int32 m_nTicksToHoldShuffleTime; // offset 0x1454, size 0x4, align 4 | MPropertyStartGroup
    CGlobalSymbol m_strAG2HeroActionGainedBullets; // offset 0x1458, size 0x8, align 8
};
