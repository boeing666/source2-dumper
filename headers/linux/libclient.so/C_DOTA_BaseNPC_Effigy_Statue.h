#pragma once

class C_DOTA_BaseNPC_Effigy_Statue : public C_DOTA_BaseNPC_Building /*0x0*/  // sizeof 0x1CE8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1CB0]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hEffigyParticleDef; // offset 0x1CB0, size 0x8, align 8
    EEvent m_eEffigyEvent; // offset 0x1CB8, size 0x4, align 4
    int32 m_nEffigyLevel; // offset 0x1CBC, size 0x4, align 4
    char _pad_1CC0[0x24]; // offset 0x1CC0
    int32 m_nQuality; // offset 0x1CE4, size 0x4, align 4
};
