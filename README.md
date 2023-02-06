# autocheck
autoprogram
import aiohttp
import telebot
import openai

bot = telebot.TeleBot ("6064335509:AAGg1q4tMg2BalqPXHaBsYrx3QWMQ49bEMA")
openai.api_key = "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"

@bot.message_handler(content_types=["text"])
def handler_text(message):
    response = openai.Completion.create(
        engine="text-davinci-003",
        prompt=f"Hello",
        max_token=1024,
        n=1,
        stop=None,
        temperature=0.5,

    )
    bot.send_message(message.chat.id, response.choices[0].text)


bot.polling()
