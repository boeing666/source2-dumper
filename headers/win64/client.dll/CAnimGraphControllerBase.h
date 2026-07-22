#pragma once

class CAnimGraphControllerBase  // sizeof 0x90, align 0xFF [vtable abstract] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x18]; // offset 0x0
    ExternalAnimGraphHandle_t m_hExternalGraph; // offset 0x18, size 0x4, align 255
    char _pad_001C[0x74]; // offset 0x1C
};
