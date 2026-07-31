#pragma once

class C_DOTA_BaseNPC_Effigy_Statue : public C_DOTA_BaseNPC_Building /*0x0*/  // sizeof 0x1BE8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1BB0]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hEffigyParticleDef; // offset 0x1BB0, size 0x8, align 8
    EEvent m_eEffigyEvent; // offset 0x1BB8, size 0x4, align 4
    int32 m_nEffigyLevel; // offset 0x1BBC, size 0x4, align 4
    char _pad_1BC0[0x24]; // offset 0x1BC0
    int32 m_nQuality; // offset 0x1BE4, size 0x4, align 4
};
