#pragma once

struct EventGrantDefinition_Notification_t : public EventGrantDefinition_t /*0x0*/  // sizeof 0x18, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x8]; // offset 0x0
    ENotificationType m_eNotificationType; // offset 0x8, size 0x4, align 4
    uint32 m_unRefA; // offset 0xC, size 0x4, align 4
    uint32 m_unRefB; // offset 0x10, size 0x4, align 4
    uint32 m_unRefC; // offset 0x14, size 0x4, align 4
};
