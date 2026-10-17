#pragma once

class CTriggerDota : public CTriggerMultiple /*0x0*/  // sizeof 0xA08, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x9E8]; // offset 0x0
    CDotaEntityFilterFlags m_FilterFlags; // offset 0x9E8, size 0x20, align 255
};
