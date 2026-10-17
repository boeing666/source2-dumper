#pragma once

class CFogTrigger : public CBaseTrigger /*0x0*/  // sizeof 0xD10, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xCA8]; // offset 0x0
    fogparams_t m_fog; // offset 0xCA8, size 0x68, align 8 | MNotSaved
};
