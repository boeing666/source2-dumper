#pragma once

class CDOTA_BaseNPC_Effigy_Statue : public CDOTA_BaseNPC_Building /*0x0*/  // sizeof 0x19D0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x19C0]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hEffigyParticleDef; // offset 0x19C0, size 0x8, align 8
    EEvent m_eEffigyEvent; // offset 0x19C8, size 0x4, align 4
    int32 m_nEffigyLevel; // offset 0x19CC, size 0x4, align 4
};
