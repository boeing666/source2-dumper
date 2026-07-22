#pragma once

class C_SoundEventPathCornerEntity : public C_SoundEventEntity /*0x0*/  // sizeof 0x850, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x838]; // offset 0x0
    C_NetworkUtlVectorBase< SoundeventPathCornerPairNetworked_t > m_vecCornerPairsNetworked; // offset 0x838, size 0x18, align 8 | MNotSaved
};
