#pragma once

class CDOTA_Unit_Announcer : public C_DOTA_BaseNPC /*0x0*/  // sizeof 0x1B68, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1B38]; // offset 0x0
    CAnnouncerDescriptor m_currentAnnouncer; // offset 0x1B38, size 0x28, align 255
    char _pad_1B60[0x8]; // offset 0x1B60
};
