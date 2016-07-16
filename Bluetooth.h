typedef void (*WriteCharacteristicCallbackFn) (uint8_t[], uint16_t);

typedef struct {
  int32_t charId;
  const char *charDef;
  WriteCharacteristicCallbackFn callback;
} CharacteristicConfigType;

#define UNINITIALIZED -100
#define COUNT(x) (sizeof(x) / sizeof(*x))

void setupBluetooth(CharacteristicConfigType *cconfigs, int32_t cccount);
void loopBluetooth(void);

