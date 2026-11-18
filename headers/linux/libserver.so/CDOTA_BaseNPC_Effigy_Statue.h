#pragma once

class CDOTA_BaseNPC_Effigy_Statue : public CDOTA_BaseNPC_Building /*0x0*/  // sizeof 0x1E30, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1E20]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hEffigyParticleDef; // offset 0x1E20, size 0x8, align 8
    EEvent m_eEffigyEvent; // offset 0x1E28, size 0x4, align 4
    int32 m_nEffigyLevel; // offset 0x1E2C, size 0x4, align 4
};
