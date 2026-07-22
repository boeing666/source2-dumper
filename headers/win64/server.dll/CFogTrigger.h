#pragma once

class CFogTrigger : public CBaseTrigger /*0x0*/  // sizeof 0x950, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8E8]; // offset 0x0
    fogparams_t m_fog; // offset 0x8E8, size 0x68, align 8 | MNotSaved
};
