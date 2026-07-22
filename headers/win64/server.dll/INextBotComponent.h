#pragma once

class INextBotComponent : public INextBotEventResponder /*0x0*/  // sizeof 0x20, align 0xFF [vtable abstract] (server)
{
public:
    char _pad_0000[0x8]; // offset 0x0
    GameTime_t m_lastUpdateTime; // offset 0x8, size 0x4, align 255
    float32 m_curInterval; // offset 0xC, size 0x4, align 4
    char _pad_0010[0x10]; // offset 0x10
};
