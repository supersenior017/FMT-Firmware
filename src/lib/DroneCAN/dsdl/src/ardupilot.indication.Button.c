

#define CANARD_DSDLC_INTERNAL
#include <ardupilot.indication.Button.h>

#include <string.h>

#ifdef CANARD_DSDLC_TEST_BUILD
#include <test_helpers.h>
#endif

uint32_t ardupilot_indication_Button_encode(struct ardupilot_indication_Button* msg, uint8_t* buffer
#if CANARD_ENABLE_TAO_OPTION
    , bool tao
#endif
) {
    uint32_t bit_ofs = 0;
    memset(buffer, 0, ARDUPILOT_INDICATION_BUTTON_MAX_SIZE);
    _ardupilot_indication_Button_encode(buffer, &bit_ofs, msg, 
#if CANARD_ENABLE_TAO_OPTION
    tao
#else
    true
#endif
    );
    return ((bit_ofs+7)/8);
}

bool ardupilot_indication_Button_decode(const CanardRxTransfer* transfer, struct ardupilot_indication_Button* msg) {
    uint32_t bit_ofs = 0;
    _ardupilot_indication_Button_decode(transfer, &bit_ofs, msg, 
#if CANARD_ENABLE_TAO_OPTION
    transfer->tao
#else
    true
#endif
    );

    return (((bit_ofs+7)/8) != transfer->payload_len);
}

#ifdef CANARD_DSDLC_TEST_BUILD
struct ardupilot_indication_Button sample_ardupilot_indication_Button_msg(void) {

    struct ardupilot_indication_Button msg;






    msg.button = (uint8_t)random_bitlen_unsigned_val(8);







    msg.press_time = (uint8_t)random_bitlen_unsigned_val(8);





    return msg;

}
#endif