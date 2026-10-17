#pragma once

class CFogTrigger : public CBaseTrigger /*0x0*/  // sizeof 0xA38, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x9D0]; // offset 0x0
    fogparams_t m_fog; // offset 0x9D0, size 0x68, align 8 | MNotSaved
};
