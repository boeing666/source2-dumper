#pragma once

struct SoundeventBoxHelperNetworked_t  // sizeof 0x30, align 0xFF [trivial_dtor] (client)
{
    VectorWS vOrigin; // offset 0x0, size 0xC, align 4
    QAngle qAngles; // offset 0xC, size 0xC, align 4
    Vector vMins; // offset 0x18, size 0xC, align 4
    Vector vMaxs; // offset 0x24, size 0xC, align 4
};
