#pragma once

class CTriggerDota : public CTriggerMultiple /*0x0*/  // sizeof 0xCE0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xCC0]; // offset 0x0
    CDotaEntityFilterFlags m_FilterFlags; // offset 0xCC0, size 0x20, align 255
};
