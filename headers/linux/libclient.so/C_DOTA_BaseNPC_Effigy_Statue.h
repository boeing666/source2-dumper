#pragma once

class C_DOTA_BaseNPC_Effigy_Statue : public C_DOTA_BaseNPC_Building /*0x0*/  // sizeof 0x1D78, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1D40]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hEffigyParticleDef; // offset 0x1D40, size 0x8, align 8
    EEvent m_eEffigyEvent; // offset 0x1D48, size 0x4, align 4
    int32 m_nEffigyLevel; // offset 0x1D4C, size 0x4, align 4
    char _pad_1D50[0x24]; // offset 0x1D50
    int32 m_nQuality; // offset 0x1D74, size 0x4, align 4
};
