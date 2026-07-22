#pragma once

class CDOTA_Ability_Ogre_Magi_Ignite : public CDOTABaseAbility /*0x0*/  // sizeof 0x588, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    ParticleIndex_t m_nFXIndex; // offset 0x580, size 0x4, align 255
    int32 m_nMostRecentMulticastCount; // offset 0x584, size 0x4, align 4
};
