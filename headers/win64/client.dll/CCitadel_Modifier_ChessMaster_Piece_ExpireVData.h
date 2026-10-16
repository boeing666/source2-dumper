#pragma once

class CCitadel_Modifier_ChessMaster_Piece_ExpireVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x878, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    bool m_bExpireOverTime; // offset 0x790, size 0x1, align 1 | MPropertyStartGroup
    bool m_bExpireFromDistanceToCaster; // offset 0x791, size 0x1, align 1
    bool m_bExpireWhenCasterDies; // offset 0x792, size 0x1, align 1
    char _pad_0793[0x5]; // offset 0x793
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MoveAvailableParticle; // offset 0x798, size 0xE0, align 8 | MPropertyStartGroup
};
