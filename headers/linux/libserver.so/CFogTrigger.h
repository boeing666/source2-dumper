#pragma once

class CFogTrigger : public CBaseTrigger /*0x0*/  // sizeof 0xC28, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBC0]; // offset 0x0
    fogparams_t m_fog; // offset 0xBC0, size 0x68, align 8 | MNotSaved
};
